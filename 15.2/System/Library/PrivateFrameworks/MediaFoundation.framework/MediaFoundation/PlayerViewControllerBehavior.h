@interface PlayerViewControllerBehavior : AVMusicAppBehavior {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ onGoingJumpToTimeInfo;
    void /* unknown type, empty encoding */ reporter;
}

- (void).cxx_destruct;
- (id)init;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)willMoveToContext:(id)a0;
- (void)contextWillHandleUserAction:(long long)a0;

@end
