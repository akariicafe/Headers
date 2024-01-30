@class NSArray, NSString;

@interface _EditScriptDataArray : NSObject <_EditScriptData>

@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) NSString *cachedStringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)EditScriptDataWithString:(id)a0 chunkSize:(long long)a1;
+ (id)EditScriptDataWithArray:(id)a0;

- (long long)length;
- (id)stringAtIndex:(long long)a0;
- (void)dealloc;
- (long long)lengthOfItem:(long long)a0;
- (id)initWithString:(id)a0 chunkSize:(long long)a1;
- (long long)characterIndexForItem:(long long)a0;
- (long long)indexOfFirstDifferenceWithOtherData:(id)a0 shouldReverseIterate:(BOOL)a1;
- (id)stringValue;
- (id)initWithArray:(id)a0;

@end
