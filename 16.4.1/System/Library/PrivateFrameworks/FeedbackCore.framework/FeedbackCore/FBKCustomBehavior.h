@class NSNumber, NSDictionary, NSString;

@interface FBKCustomBehavior : NSObject

@property (readonly, nonatomic) BOOL makeVisible;
@property (readonly, nonatomic) BOOL notifyOnUpload;
@property (readonly, nonatomic) NSNumber *formId;
@property (readonly, nonatomic) NSDictionary *answers;
@property (readonly, nonatomic) BOOL launchNewDraft;
@property (readonly, nonatomic) BOOL isCaptive;
@property (readonly, copy, nonatomic) NSString *description;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
