@class NSData, NSMutableDictionary;

@interface _CNVirtualFile : NSObject

@property (copy) NSData *contents;
@property (readonly) NSMutableDictionary *extendedAttributes;

- (void).cxx_destruct;
- (id)init;

@end
