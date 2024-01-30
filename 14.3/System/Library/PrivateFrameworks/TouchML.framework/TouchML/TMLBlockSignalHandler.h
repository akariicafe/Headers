@class NSString;

@interface TMLBlockSignalHandler : NSObject <TMLSignalHandler> {
    id /* block */ _block;
    int _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detach;
- (id)callWithArguments:(id)a0;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)attach;

@end
