@class NSString;

@interface WBSPasswordWordList : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)entriesForString:(id)a0;
- (void)enumerateEntriesForString:(id)a0 withBlock:(id /* block */)a1;

@end
