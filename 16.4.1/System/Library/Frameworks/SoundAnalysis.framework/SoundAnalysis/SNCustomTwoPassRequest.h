@class NSString, SNTwoPassConfiguration;

@interface SNCustomTwoPassRequest : NSObject <SNTwoPassRequest> {
    id /* block */ _createSecondPassControllerFunction;
}

@property (readonly) SNTwoPassConfiguration *twoPassConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createSecondPassController;

@end
