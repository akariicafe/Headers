@class NSString, IPAAdjustmentVersion, NSDictionary;

@interface IPAAdjustment : NSObject <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) IPAAdjustmentVersion *version;
@property (retain, nonatomic) NSDictionary *settings;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (BOOL)isEqualToAdjustment:(id)a0;
- (id)_debugDescriptionSuffix;

@end
