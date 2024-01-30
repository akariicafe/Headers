@class NSString, SVXButtonEvent;

@interface _SVXButtonEventMutation : NSObject <SVXButtonEventMutating> {
    SVXButtonEvent *_baseModel;
    long long _type;
    unsigned long long _timestamp;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasType : 1; unsigned char hasTimestamp : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTimestamp:(unsigned long long)a0;
- (void)setType:(long long)a0;
- (id)generate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;

@end
