@class NSString;

@interface GKFamiliarPlayerInternal : GKPlayerInternal {
    NSString *_firstName;
    NSString *_lastName;
    NSString *_compositeName;
}

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)setFirstName:(id)a0;
- (void)setLastName:(id)a0;
- (void).cxx_destruct;
- (id)lastName;
- (id)compositeName;
- (id)firstName;
- (void)setCompositeName:(id)a0;

@end
