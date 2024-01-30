@class NSString;

@interface ARWorldAlignmentData : NSObject <ARResultData, NSSecureCoding> {
    unsigned long long _modifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } worldAlignmentTransform;
@property (readonly, nonatomic) unsigned long long worldAlignmentModifiers;
@property (nonatomic) BOOL worldAlignmentReset;
@property (nonatomic) BOOL referenceOriginChanged;
@property (nonatomic) BOOL sessionShouldResumeCameraPosition;
@property (nonatomic) BOOL sessionShouldResumeCameraPositionAndHeading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
