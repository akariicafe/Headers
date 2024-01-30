@class NSArray, NSMutableArray, NSString;

@interface RichLinkAttachmentSubstituter : NSObject <NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate>

@property (readonly, copy, nonatomic) NSMutableArray *archivedAttachments;
@property (copy, nonatomic) NSArray *attachmentsForUnarchiving;
@property (nonatomic) BOOL shouldSubstituteAttachments;
@property (nonatomic) BOOL shouldIgnoreAppStoreMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)archiver:(id)a0 willEncodeObject:(id)a1;
- (id)unarchiver:(id)a0 didDecodeObject:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)applyAttachmentSubstitutionForObject:(id)a0;

@end
