@class NSSet, NSDate;

@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding> {
    long long _maximumCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *sinceDate;
@property (retain, nonatomic) NSSet *enabledSectionIDs;
@property (readonly, nonatomic) unsigned long long publisherDestination;
@property (readonly, nonatomic) unsigned long long maximumCount;

+ (id)requestParametersForDestination:(unsigned long long)a0 withSinceDate:(id)a1 maximumCount:(long long)a2 enabledSectionIDs:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDestination:(unsigned long long)a0 sinceDate:(id)a1 maximumCount:(long long)a2 enabledSectionIDs:(id)a3;

@end
