@class NSString;

@interface GKFamiliarPlayerInternal : GKPlayerInternal {
    NSString *_firstName;
    NSString *_lastName;
    NSString *_compositeName;
}

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;

- (void)setFirstName:(id)a0;
- (id)firstName;
- (id)lastName;
- (void)dealloc;
- (void)setLastName:(id)a0;
- (void)setCompositeName:(id)a0;
- (id)compositeName;

@end
