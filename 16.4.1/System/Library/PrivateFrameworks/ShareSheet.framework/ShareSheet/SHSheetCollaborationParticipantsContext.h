@class NSString;

@interface SHSheetCollaborationParticipantsContext : NSObject

@property (readonly, copy, nonatomic) NSString *headerTitle;
@property (readonly, copy, nonatomic) NSString *supplementaryText;
@property (readonly, copy, nonatomic) NSString *confirmButtonText;
@property (readonly, copy, nonatomic) NSString *loadingText;

+ (id)defaultContext;

- (void).cxx_destruct;
- (id)initWithHeaderTitle:(id)a0 supplementaryText:(id)a1 confirmButtonText:(id)a2 loadingText:(id)a3;

@end
