@interface CNUICoreContactPropertyFilterBuilder : NSObject

@property (class, readonly, nonatomic) CNUICoreContactPropertyFilterBuilder *managedContactsFilterBuilder;
@property (class, readonly, nonatomic) CNUICoreContactPropertyFilterBuilder *whitelistedContactsFilterBuilder;

@property (nonatomic) BOOL excludeNickname;
@property (nonatomic) BOOL excludePhoto;
@property (nonatomic) BOOL excludeNote;
@property (nonatomic) BOOL excludeRelationships;

- (id)build;

@end
