@class NSString;

@interface PXSearchResultPerson : NSObject <PXNewSearchResult>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned long long assetCount;
@property (copy, nonatomic) NSString *personUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uniqueIdentiferFromPersonUUID:(id)a0 displayName:(id)a1;

- (id)initWithTitle:(id)a0 assetCount:(unsigned long long)a1 personUUID:(id)a2 identifier:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
