@class MTMediaActivityEventHandler;

@interface MTPAFEventHandlers : MTEventHandlers

@property (readonly, nonatomic) MTMediaActivityEventHandler *playStart;
@property (readonly, nonatomic) MTMediaActivityEventHandler *playStop;
@property (readonly, nonatomic) MTMediaActivityEventHandler *seekStart;
@property (readonly, nonatomic) MTMediaActivityEventHandler *seekStop;

- (void)registerDefaultEventHandlers;
- (Class)baseDataProviderClass;

@end
