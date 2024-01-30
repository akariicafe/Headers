@class NSURL, NSString;

@interface PFStoryConcreteRecipeLibrary : NSObject <PFStoryRecipeLibrary>

@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithKind:(long long)a0 url:(id)a1;
- (BOOL)isEqualToLibrary:(id)a0;

@end
