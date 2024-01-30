@class NSString, TCDumpType;

@interface TCDumpField : NSObject {
    TCDumpType *mType;
    NSString *mName;
}

- (id)type;
- (void).cxx_destruct;
- (id)name;
- (id)initWithType:(id)a0 name:(id)a1;

@end
