@class NSNumber, NSString;

@interface MTRChannelClusterChannelInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *majorNumber;
@property (copy, nonatomic) NSNumber *minorNumber;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *callSign;
@property (copy, nonatomic) NSString *affiliateCallSign;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
