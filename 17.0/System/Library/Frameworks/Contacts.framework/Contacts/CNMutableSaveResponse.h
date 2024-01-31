@interface CNMutableSaveResponse : CNSaveResponse

@property BOOL didAffectMeCard;

+ (BOOL)supportsSecureCoding;

- (void)setContactSnapshot:(id)a0 forIndexPath:(id)a1;
- (void)setContainerSnapshot:(id)a0 forIndexPath:(id)a1;
- (void)setDidAffectMeCard:(BOOL)a0;
- (void)setGroupSnapshot:(id)a0 forIndexPath:(id)a1;

@end
