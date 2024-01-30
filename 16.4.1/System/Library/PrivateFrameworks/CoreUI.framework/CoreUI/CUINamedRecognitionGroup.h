@class NSMutableDictionary;

@interface CUINamedRecognitionGroup : CUINamedLookup {
    NSMutableDictionary *_imageContents;
    NSMutableDictionary *_objectContents;
}

- (void)dealloc;
- (id)initWithName:(id)a0 contentsFromCatalog:(id)a1 usingRenditionKey:(id)a2 fromTheme:(unsigned long long)a3;
- (id)namedRecognitionImageImageList;
- (id)namedRecognitionItemList;
- (id)namedRecognitionObjectObjectList;
- (id)recognitionImageWithName:(id)a0;
- (id)recognitionItemsWithName:(id)a0;
- (id)recognitionObjectWithName:(id)a0;

@end
