@class NSMutableString;

@interface _CDStatsPrinter : NSObject {
    NSMutableString *_s;
    unsigned long long _indent;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
