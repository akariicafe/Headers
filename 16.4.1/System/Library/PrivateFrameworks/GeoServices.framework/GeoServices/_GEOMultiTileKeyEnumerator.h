@class NSString, NSArray;

@interface _GEOMultiTileKeyEnumerator : NSObject <GEOTileKeyEnumerator> {
    NSArray *_enumerators;
    unsigned int _currentEnumeratorIndex;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)continueEnumeratingTileKeysWithBlock:(id /* block */)a0;
- (id)initWithEnumerators:(id)a0;

@end
