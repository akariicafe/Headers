@class NSArray;

@interface MLRTaskAttachments : NSObject

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *attachmentURLs;

- (id)description;
- (void).cxx_destruct;
- (id)attachmentURLsForBasename:(id)a0;
- (id)initWithURLs:(id)a0;
- (id)initWithDESRecipe:(id)a0;

@end
