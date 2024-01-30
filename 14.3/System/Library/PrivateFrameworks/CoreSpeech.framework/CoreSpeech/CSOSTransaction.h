@class NSString, NSObject;
@protocol OS_os_transaction;

@interface CSOSTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_description;
}

- (id)initWithDescription:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
