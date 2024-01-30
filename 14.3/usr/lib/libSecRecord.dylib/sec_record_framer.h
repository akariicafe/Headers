@class NSString;

@interface sec_record_framer : NSObject <OS_sec_record_framer> {
    id /* block */ encap;
    id /* block */ decap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
