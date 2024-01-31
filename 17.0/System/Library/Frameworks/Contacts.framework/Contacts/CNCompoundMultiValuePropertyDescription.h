@class NSArray;

@interface CNCompoundMultiValuePropertyDescription : CNMultiValuePropertyDescription

@property (readonly, nonatomic) id /* block */ dictionaryTransform;
@property (readonly, nonatomic) id /* block */ fromDictionaryTransform;
@property (readonly, nonatomic) NSArray *summarizationKeys;

- (id /* block */)fromPlistTransform;
- (id /* block */)plistTransform;
- (id)stringForIndexingForContact:(id)a0;

@end
