@interface VUIFamilyMembersRequestResponseParser : NSObject

- (id)init;
- (id)parseAMSURLResult:(id)a0;
- (id)_parseFamilyMemberIdentifierFromDictionary:(id)a0 withKey:(id)a1;
- (id)_processRawFamilyMemberResults:(id)a0;
- (id)_filterCurrentFamilyMember:(id)a0 fromResults:(id)a1;

@end
