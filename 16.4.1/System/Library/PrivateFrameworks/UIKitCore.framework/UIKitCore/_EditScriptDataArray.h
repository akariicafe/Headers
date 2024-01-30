@class NSArray, NSString;

@interface _EditScriptDataArray : NSObject <_EditScriptData>

@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) NSString *cachedStringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)EditScriptDataWithArray:(id)a0;
+ (id)EditScriptDataWithString:(id)a0 chunkSize:(long long)a1;

- (id)stringValue;
- (id)stringAtIndex:(long long)a0;
- (id)initWithArray:(id)a0;
- (long long)length;
- (void).cxx_destruct;
- (long long)characterIndexForItem:(long long)a0;
- (long long)indexOfFirstDifferenceWithOtherData:(id)a0 shouldReverseIterate:(BOOL)a1;
- (id)initWithString:(id)a0 chunkSize:(long long)a1;
- (long long)lengthOfItem:(long long)a0;

@end
