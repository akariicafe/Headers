@class NSString;

@interface REStringScriptBuffer : NSObject <REScriptBuffer> {
    NSString *_string;
    unsigned long long _index;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) unsigned short current;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
