@class NSString, TCDumpType;

@interface TCDumpField : NSObject {
    TCDumpType *mType;
    NSString *mName;
}

- (void).cxx_destruct;
- (id)initWithType:(id)a0 name:(id)a1;
- (id)name;
- (id)type;

@end
