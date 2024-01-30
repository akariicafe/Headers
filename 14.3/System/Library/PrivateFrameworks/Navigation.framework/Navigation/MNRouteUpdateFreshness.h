@class NSString;

@interface MNRouteUpdateFreshness : NSObject <MNJSONOutput, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double maxAge;
@property (nonatomic) double maxDisplacement;
@property (nonatomic) double minAccuracy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;

@end
