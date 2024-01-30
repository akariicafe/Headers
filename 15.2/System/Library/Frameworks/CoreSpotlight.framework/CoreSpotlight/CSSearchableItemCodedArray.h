@class NSString, CSDecoder;

@interface CSSearchableItemCodedArray : NSArray

@property (readonly, nonatomic) struct { char *containerBytes; struct { unsigned int embeddedReference; unsigned char type; } reference; } obj;
@property (readonly, nonatomic) CSDecoder *items;
@property (readonly, nonatomic) CSDecoder *itemsContent;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *protectionClass;

- (id)initWithItems:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithItems:(id)a0 itemsContent:(id)a1;

@end
