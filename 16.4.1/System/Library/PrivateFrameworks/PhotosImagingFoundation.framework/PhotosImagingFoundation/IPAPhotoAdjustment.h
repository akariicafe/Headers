@class NSString, NSDictionary;

@interface IPAPhotoAdjustment : IPAAdjustment

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *maskUUID;
@property (retain, nonatomic) NSDictionary *autoSettings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_debugDescriptionSuffix;

@end
