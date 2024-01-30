@class NSArray, NSMutableArray;

@interface ATXHomeScreenFolderPage : NSObject <NSSecureCoding> {
    NSMutableArray *_contents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *contents;

- (void)encodeWithCoder:(id)a0;
- (id)initWithContents:(id)a0;
- (id)dictionaryRepresentationForIntrospection;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToATXHomeScreenFolderPage:(id)a0;
- (void)addIcon:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
