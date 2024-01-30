@class NSString, WKPreferenceObserver;

@interface WKUserDefaults : NSUserDefaults {
    NSString *m_suiteName;
    WKPreferenceObserver *m_observer;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (id)initWithSuiteName:(id)a0;

@end
