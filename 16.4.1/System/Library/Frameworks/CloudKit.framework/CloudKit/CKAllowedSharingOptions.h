@class NSArray, _SWCollaborationShareOptions, NSString;

@interface CKAllowedSharingOptions : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) CKAllowedSharingOptions *standardOptions;
@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SWCollaborationShareOptions *mutableShareOptions;
@property (retain, nonatomic) NSArray *mutableOptionsGroups;
@property (readonly, nonatomic) _SWCollaborationShareOptions *shareOptions;
@property (readonly, nonatomic) NSArray *optionsGroups;
@property BOOL supportAllowingAddedParticipantsToInviteOthers;
@property unsigned long long allowedParticipantPermissionOptions;
@property unsigned long long allowedParticipantAccessOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)resolvedOptionsFromOptions:(id)a0 forExistingShare:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithAllowedParticipantPermissionOptions:(unsigned long long)a0 allowedParticipantAccessOptions:(unsigned long long)a1;
- (void)_addOptions:(id)a0 toExistingGroupWithID:(id)a1 inOptionsGroups:(id)a2;
- (BOOL)_optionsGroupsOnlyContainsSingleOptionInPermissionArrayAndWhoCanAccessArray:(id)a0;
- (void)_removeOptionGroupWithID:(id)a0 fromOptionsGroups:(id)a1;
- (void)_resolveCollaborationOptionsGroupsForExistingShare:(id)a0;
- (void)_selectOptionWithIdentifier:(id)a0 inGroups:(id)a1;
- (id)_uncachedCollaborationOptionsGroupsFromAllowedOptions;
- (id)_uncachedShareOptionsFromAllowedOptions;
- (id)collaborationOptionsGroupsFromAllowedOptions;
- (id)shareOptionsFromAllowedOptions;

@end
