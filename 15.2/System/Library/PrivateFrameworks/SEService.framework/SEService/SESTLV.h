@class NSData, NSArray;

@interface SESTLV : NSObject {
    unsigned int _tag;
    NSData *_value;
    NSArray *_children;
}

- (id)description;
- (void).cxx_destruct;

@end
