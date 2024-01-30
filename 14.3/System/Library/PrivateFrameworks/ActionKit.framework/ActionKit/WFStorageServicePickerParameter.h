@class NSArray, WFiCloudDriveAccessResource;

@interface WFStorageServicePickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (retain, nonatomic) WFiCloudDriveAccessResource *iCloudDriveAccessResource;

+ (id)referencedActionResourceClasses;

- (id)possibleStates;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (id)defaultSupportedVariableTypes;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)accessoryIconForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)setActionResources:(id)a0;

@end
