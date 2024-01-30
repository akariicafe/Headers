@class NSString;

@interface BlastDoorMessagePartAttribute : NSObject {
    void /* unknown type, empty encoding */ messagePartAttribute;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic, readonly) unsigned long long partNumber;

- (id)init;

@end
