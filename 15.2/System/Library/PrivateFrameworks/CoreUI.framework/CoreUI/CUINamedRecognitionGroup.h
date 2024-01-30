@class NSMutableDictionary;

@interface CUINamedRecognitionGroup : CUINamedLookup {
    NSMutableDictionary *_imageContents;
    NSMutableDictionary *_objectContents;
}

- (void)dealloc;
- (id)recognitionImageWithName:(id)a0;
- (id)recognitionObjectWithName:(id)a0;
- (id)initWithName:(id)a0 contentsFromCatalog:(id)a1 usingRenditionKey:(id)a2 fromTheme:(unsigned long long)a3;
- (id)namedRecognitionItemList;
- (id)namedRecognitionImageImageList;
- (id)namedRecognitionObjectObjectList;
- (id)recognitionItemsWithName:(id)a0;

@end
