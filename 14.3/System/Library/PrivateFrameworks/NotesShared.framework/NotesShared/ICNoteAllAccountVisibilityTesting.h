@class NSString;

@interface ICNoteAllAccountVisibilityTesting : NSObject <ICNoteVisibilityTesting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)predicateForSearchableNotes;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (id)predicateForSearchableAttachments;

@end
