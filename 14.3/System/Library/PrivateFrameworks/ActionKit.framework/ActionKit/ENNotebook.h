@class NSString, EDAMSharedNotebook, EDAMLinkedNotebook, EDAMNotebook;

@interface ENNotebook : NSObject <NSCoding>

@property (retain, nonatomic) EDAMNotebook *notebook;
@property (retain, nonatomic) EDAMLinkedNotebook *linkedNotebook;
@property (retain, nonatomic) EDAMSharedNotebook *sharedNotebook;
@property (nonatomic) BOOL isShared;
@property (nonatomic) BOOL isDefaultNotebookOverride;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *ownerDisplayName;
@property (readonly, nonatomic) BOOL allowsWriting;
@property (readonly, nonatomic) BOOL isOwnShared;
@property (readonly, nonatomic) BOOL isJoinedShared;
@property (readonly, nonatomic) BOOL isPublic;
@property (readonly, nonatomic) BOOL isOwnPublic;
@property (readonly, nonatomic) BOOL isJoinedPublic;
@property (readonly, nonatomic) BOOL isBusinessNotebook;
@property (readonly, nonatomic) BOOL isOwnedByUser;
@property (readonly, nonatomic) BOOL isDefaultNotebook;

- (id)guid;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isLinked;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNotebook:(id)a0;
- (id)initWithSharedNotebook:(id)a0 forLinkedNotebook:(id)a1;
- (id)initWithPublicNotebook:(id)a0 forLinkedNotebook:(id)a1;
- (id)initWithSharedNotebook:(id)a0 forLinkedNotebook:(id)a1 withBusinessNotebook:(id)a2;
- (id)initWithNotebook:(id)a0 linkedNotebook:(id)a1 sharedNotebook:(id)a2;

@end
