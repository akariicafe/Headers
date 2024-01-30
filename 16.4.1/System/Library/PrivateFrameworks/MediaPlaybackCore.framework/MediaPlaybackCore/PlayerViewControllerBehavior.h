@interface PlayerViewControllerBehavior : AVMusicAppBehavior {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ onGoingJumpToTimeInfo;
    void /* unknown type, empty encoding */ reporter;
}

- (id)init;
- (void).cxx_destruct;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)contextWillHandleUserAction:(long long)a0;
- (void)willMoveToContext:(id)a0;

@end
