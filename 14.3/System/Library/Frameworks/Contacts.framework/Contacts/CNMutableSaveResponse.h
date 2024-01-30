@interface CNMutableSaveResponse : CNSaveResponse

@property BOOL didAffectMeCard;

+ (BOOL)supportsSecureCoding;

- (void)setDidAffectMeCard:(BOOL)a0;
- (void)setContainerSnapshot:(id)a0 forIndexPath:(id)a1;
- (void)setContactSnapshot:(id)a0 forIndexPath:(id)a1;
- (void)setGroupSnapshot:(id)a0 forIndexPath:(id)a1;

@end
