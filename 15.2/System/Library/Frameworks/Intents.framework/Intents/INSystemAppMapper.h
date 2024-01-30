@class NSDictionary;

@interface INSystemAppMapper : NSObject {
    struct map<std::string, INSystemApp, std::less<std::string>, std::allocator<std::pair<const std::string, INSystemApp>>> { struct __tree<std::__value_type<std::string, INSystemApp>, std::__map_value_compare<std::string, std::__value_type<std::string, INSystemApp>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, INSystemApp>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, INSystemApp>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, INSystemApp>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _mapping;
    NSDictionary *_bundleIdentifierGroupingForIntentExecution;
}

+ (id)supportedIntentsOverridesForBundleIdentifier:(id)a0;

- (id)resolvedAppMatchingExtensionBundleIdentifier:(id)a0;
- (id)launchableBundleIdentifierMatchingBundleIdentifier:(id)a0;
- (id)resolvedIntentMatchingExtensionBundleIdentifier:(id)a0 preferredCallProvider:(long long)a1 intentClassName:(id)a2;
- (id)resolvedIntentMatchingAppBundleIdentifier:(id)a0 preferredCallProvider:(long long)a1 intentClassName:(id)a2;
- (id)bundleIdentifiersForIntentExecutionMatchingBundleIdentifier:(id)a0;
- (id)extensionToLaunchableAppBundleIdentifierMapping;
- (id)extensionToDisplayableAppBundleIdentifierMapping;
- (id)resolvedIntentForAccessibilityActionWithBundleIdentifier:(id)a0 intentClassName:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
