@class NSMutableString;

@interface _CDStatsPrinter : NSObject {
    NSMutableString *_s;
    unsigned long long _indent;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
