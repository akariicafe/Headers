@class NSString;

@interface CMHandDetectionDelegate : NSObject <CMCallHandednessDelegate> {
    struct block<void (^)(CMCallHandedness)> { id /* block */ fBlock; } fCallBack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
