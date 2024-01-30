@class NSString;

@interface BSStackFrameInfo : NSObject {
    NSString *_realFunctionName;
}

@property (readonly, nonatomic) unsigned long long address;
@property (readonly, nonatomic) NSString *functionName;
@property (readonly, nonatomic) NSString *executableName;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic) NSString *className;

- (void).cxx_destruct;
- (id)description;

@end
