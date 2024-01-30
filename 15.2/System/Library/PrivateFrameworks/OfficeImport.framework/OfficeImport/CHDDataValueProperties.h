@class NSString, OADGraphicProperties, CHDDataLabel, CHDMarker;

@interface CHDDataValueProperties : NSObject <EDKeyedObject> {
    CHDDataLabel *mDataLabel;
    CHDMarker *mMarker;
    unsigned long long mDataValueIndex;
    OADGraphicProperties *mGraphicProperties;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataValueProperties;

- (long long)key;
- (void).cxx_destruct;
- (id)init;
- (id)marker;
- (id)graphicProperties;
- (void)setDataValueIndex:(unsigned long long)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setMarker:(id)a0;
- (void)setDataLabel:(id)a0;
- (id)shallowCopyWithIndex:(unsigned long long)a0;
- (id)dataLabel;
- (unsigned long long)dataValueIndex;

@end
