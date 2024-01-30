@class NSArray;

@interface MLRTaskAttachments : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *attachmentURLs;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)attachmentURLsForBasename:(id)a0;
- (id)initWithURLs:(id)a0;
- (id)initWithDESRecipe:(id)a0;

@end
