@class NSData, NSArray;

@interface SESTLV : NSObject {
    unsigned int _tag;
    NSData *_value;
    NSArray *_children;
}

- (void).cxx_destruct;
- (id)description;

@end
