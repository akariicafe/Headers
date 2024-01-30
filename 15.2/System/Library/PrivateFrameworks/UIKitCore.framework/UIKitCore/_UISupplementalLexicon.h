@class NSArray;

@interface _UISupplementalLexicon : NSObject {
    id _internal;
}

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) unsigned long long searchPrefixes;

- (id)initWithItems:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithItems:(id)a0 searchPrefixes:(unsigned long long)a1;

@end
